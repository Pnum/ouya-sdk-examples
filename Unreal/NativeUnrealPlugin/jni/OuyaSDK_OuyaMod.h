/*
* Copyright (C) 2012-2015 OUYA, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __TV_OUYA_CONSOLE_API_CONTENT_OUYAMOD_H__
#define __TV_OUYA_CONSOLE_API_CONTENT_OUYAMOD_H__

#if PLATFORM_ANDROID

#include "OuyaSDK_OuyaModEditor.h"

#include <jni.h>

namespace tv_ouya_console_api_content_OuyaMod
{
	class OuyaMod
	{
	public:
		static int InitJNI(JavaVM* jvm);
		static int FindJNI();
		OuyaMod(jobject instance);
		jobject GetInstance() const;
		void Dispose() const;
		tv_ouya_console_api_content_OuyaModEditor::OuyaModEditor edit() const;
	private:
		static JavaVM* _jvm;
		static jclass _jcOuyaMod;
		static jmethodID _jmEdit;
		jobject _instance;
	};
}

#endif

#endif
