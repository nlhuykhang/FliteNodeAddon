#include <node.h>
#include <v8.h>
#include "api.h"

using namespace v8;

char* getChar(Local<Value> value) {
    
    if (value->IsString()) {
        
        String::Utf8Value strin(value);
        
        char *str = (char *) malloc(strin.length() + 1);
        
        strcpy(str, *strin);
        
        return str;
    }
    return (char*)"";
}

void Method(const FunctionCallbackInfo<Value>& args) {

  char **a = new char*[5];

  a[0] = (char*)"";
  a[1] = (char*)"-t";
  a[2] = getChar(args[0]);
  a[3] = (char*)"-o";
  a[4] = getChar(args[1]);

  Isolate* isolate = Isolate::GetCurrent();

  HandleScope scope(isolate);

  Local<Function> cb = Local<Function>::Cast(args[2]);
  
  Local<Value> argv[1] = {String::NewFromUtf8(isolate, getChar(args[1]))};

  makeWAV(5, a);

  cb->Call(isolate->GetCurrentContext()->Global(), 1, argv);
}

void init(Handle<Object> exports) {
  NODE_SET_METHOD(exports, "text2wave", Method);
}

NODE_MODULE(flite, init)