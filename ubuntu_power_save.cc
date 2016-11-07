#include <nan.h>

void Method(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    info.GetReturnValue().Set(Nan::New("world").ToLocalChecked());
}

void Init(v8::Local<v8::Object> exports) {
    exports->Set(Nan::New("ubuntu_power_save").ToLocalChecked(),
                 Nan::New<v8::FunctionTemplate>(Method)->GetFunction());
}

NODE_MODULE(ubuntu_power_save, Init)