#pragma once
#ifndef VECTOR_H_
#define VECTOR_H_

	#include "Common/common.h"
	#ifdef __cplusplus
		struct vec2 {
			float x, y;
		}typedef vec2;

		struct vec3 {
			float x, y, z;
		}typedef vec3;

		struct vec4 {
			float x, y, z, w;
		}typedef vec4;

		vec2 vecDot(vec2 vec, float num);
		vec3 vecDot(vec3 vec, float num);
		vec4 vecDot(vec4 vec, float num);

		vec2 vecAdd(vec2 vec, vec2 num);
		vec3 vecAdd(vec3 vec, vec3 num);
		vec4 vecAdd(vec4 vec, vec4 num);

		vec2 vecSub(vec2 vec, vec2 num);
		vec3 vecSub(vec3 vec, vec3 num);
		vec4 vecSub(vec4 vec, vec4 num);

		vec2 vecMul(vec2 vec, vec2 num);
		vec3 vecMul(vec3 vec, vec3 num);
		vec4 vecMul(vec4 vec, vec4 num);


		BOOL vecLessThan(vec2 vec, vec2 num);
		BOOL vecLessThan(vec3 vec, vec3 num);
		BOOL vecLessThan(vec4 vec, vec4 num);

		BOOL vecGreaterThan(vec2 vec, vec2 num);
		BOOL vecGreaterThan(vec3 vec, vec3 num);
		BOOL vecGreaterThan(vec4 vec, vec4 num);

		BOOL vecEqual(vec2 vec, vec2 num);
		BOOL vecEqual(vec3 vec, vec3 num);
		BOOL vecEqual(vec4 vec, vec4 num);
	#endif	
	
		#ifdef __cpluscplus
			extern "C" {
		#endif
			vec2 vec2Dot(vec2 vec, float num);
			vec3 vec3Dot(vec3 vec, float num);
			vec4 vec4Dot(vec4 vec, float num);

			vec2 vec2Add(vec2 vec, vec2 num);
			vec3 vec3Add(vec3 vec, vec3 num);
			vec4 vec4Add(vec4 vec, vec4 num);

			vec2 vec2Sub(vec2 vec, vec2 num);
			vec3 vec3Sub(vec3 vec, vec3 num);
			vec4 vec4Sub(vec4 vec, vec4 num);

			vec2 vec2Mul(vec2 vec, vec2 num);
			vec3 vec3Mul(vec3 vec, vec3 num);
			vec4 vec4Mul(vec4 vec, vec4 num);


			BOOL vec2LessThan(vec2 vec, vec2 num);
			BOOL vec3LessThan(vec3 vec, vec3 num);
			BOOL vec4LessThan(vec4 vec, vec4 num);

			BOOL vec2GreaterThan(vec2 vec, vec2 num);
			BOOL vec3GreaterThan(vec3 vec, vec3 num);
			BOOL vec4GreaterThan(vec4 vec, vec4 num);

			BOOL vec2Equal(vec2 vec, vec2 num);
			BOOL vec3Equal(vec3 vec, vec3 num);
			BOOL vec4Equal(vec4 vec, vec4 num);
		#ifdef __cpluscplus
			}
		#endif

#endif // VECTOR_H_

