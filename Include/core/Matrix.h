#pragma once

#ifndef MATRIX_H_
#define MATRIX_H_

	#include "common/common.h"
	#include "core/Vector.h"

	#ifdef __cplusplus
		struct mat1x2 {
			float mat[1][2];
		}typedef mat1x2;

		struct mat1x3 {
			float mat[1][3];
		}typedef mat1x3;

		struct mat1x4 {
			float mat[1][4];
		}typedef mat1x4;

		struct mat2x1 {
			float mat[2][1];
		}typedef mat2x1;

		struct mat3x1{
			float mat[3][1];
		}typedef mat3x1;

		struct mat4x1 {
			float mat[4][1];
		}typedef mat4x1;

		struct mat2x2 {
			float mat[2][2];
		}typedef mat2x2;

		struct mat3x3 {
			float mat[3][3];
		}typedef mat3x3;

		struct mat4x4 {
			float mat[4][4];
		}typedef mat4x4;

		// Creating and assigning values to the matrices with a vector struct

		void createRvMat(mat1x2& mat, vec2 vec);
		void createRvMat(mat1x3& mat, vec3 vec);
		void createRvMat(mat1x4& mat, vec4 vec);

		mat1x2 assignRv2Mat(vec2 vec);
		mat1x3 assignRv3Mat(vec3 vec);
		mat1x4 assignRv4Mat(vec4 vec);

		void createCvMat(mat2x1& mat, vec2 vec);
		void createCvMat(mat3x1& mat, vec3 vec);
		void createCvMat(mat4x1& mat, vec4 vec);

		mat2x1 assignCv2Mat(vec2 vec);
		mat3x1 assignCv3Mat(vec3 vec);
		mat4x1 assignCv4Mat(vec4 vec);

		void createMat(mat2x2& mat, vec2 v1, vec2 v2);
		void createMat(mat3x3& mat, vec3 v1, vec3 v2 , vec3 v3);
		void createMat(mat4x4& mat, vec4 v1, vec4 v2, vec4 v3 , vec4 v4);

		mat2x2 assign2Mat(vec2 v1, vec2 v2);
		mat3x3 assign3Mat(vec3 v1, vec3 v2 , vec3 v3);
		mat4x4 assign4Mat(vec4 v1, vec4 v2, vec4 v3 , vec4 v4);

		// Multiply matrices

		mat2x2 mulToMat(mat2x1 mat1, mat1x2 mat2);
		mat3x3 mulToMat(mat3x1 mat1, mat1x3 mat2);
		mat4x4 mulToMat(mat4x1 mat1, mat1x4 mat2);

		mat2x1 mulToMat(mat2x2 mat1, mat2x1 mat2);
		mat3x1 mulToMat(mat3x3 mat1, mat3x1 mat2);
		mat4x1 mulToMat(mat4x4 mat1, mat4x1 mat2);

		float mul2Mat(mat1x2 mat1, mat2x1 mat2);
		float mul3Mat(mat1x3 mat1, mat3x1 mat2);
		float mul4Mat(mat1x4 mat1, mat4x1 mat2);

		// Comparing 2 matrices

		BOOL equalMat(mat1x2 mat1, mat1x2 mat2);
		BOOL equalMat(mat1x3 mat1, mat1x3 mat2);
		BOOL equalMat(mat1x4 mat1, mat1x4 mat2);

		BOOL equalMat(mat2x1 mat1, mat2x1 mat2);
		BOOL equalMat(mat3x1 mat1, mat3x1 mat2);
		BOOL equalMat(mat4x1 mat1, mat4x1 mat2);

		BOOL equalMat(mat2x2 mat1, mat2x2 mat2);
		BOOL equalMat(mat3x3 mat1, mat3x3 mat2);
		BOOL equalMat(mat4x4 mat1, mat4x4 mat2);

		BOOL greaterMat(mat1x2 mat1, mat1x2 mat2);
		BOOL greaterMat(mat1x3 mat1, mat1x3 mat2);
		BOOL greaterMat(mat1x4 mat1, mat1x4 mat2);

		BOOL greaterMat(mat2x1 mat1, mat2x1 mat2);
		BOOL greaterMat(mat3x1 mat1, mat3x1 mat2);
		BOOL greaterMat(mat4x1 mat1, mat4x1 mat2);

		BOOL greaterMat(mat2x2 mat1, mat2x2 mat2);
		BOOL greaterMat(mat3x3 mat1, mat3x3 mat2);
		BOOL greaterMat(mat4x4 mat1, mat4x4 mat2);

		BOOL lesserMat(mat1x2 mat1, mat1x2 mat2);
		BOOL lesserMat(mat1x3 mat1, mat1x3 mat2);
		BOOL lesserMat(mat1x4 mat1, mat1x4 mat2);

		BOOL lesserMat(mat2x1 mat1, mat2x1 mat2);
		BOOL lesserMat(mat3x1 mat1, mat3x1 mat2);
		BOOL lesserMat(mat4x1 mat1, mat4x1 mat2);

		BOOL lesserMat(mat2x2 mat1, mat2x2 mat2);
		BOOL lesserMat(mat3x3 mat1, mat3x3 mat2);
		BOOL lesserMat(mat4x4 mat1, mat4x4 mat2);
	#endif

		// Leagecy Code

	#ifdef __cpluscplus
		extern "C"{
	#endif
        // Creating and assigning values to the matrices with a vector struct

		void createMat1x2(mat1x2& mat, vec2 vec);
		void createMat1x3(mat1x3& mat, vec3 vec);
		void createMat1x4(mat1x4& mat, vec4 vec);

		mat1x2 assignMat1x2(vec2 vec);
		mat1x3 assignMat1x3(vec3 vec);
		mat1x4 assignMat1x4(vec4 vec);

		void createMat2x1(mat2x1& mat, vec2 vec);
		void createMat3x1(mat3x1& mat, vec3 vec);
		void createMat4x1(mat4x1& mat, vec4 vec);

		mat2x1 assignMat2x1(vec2 vec);
		mat3x1 assignMat3x1(vec3 vec);
		mat4x1 assignMat4x1(vec4 vec);

		void createMat2x2(mat2x2& mat, vec2 v1, vec2 v2);
		void createMat3x3(mat3x3& mat, vec3 v1, vec3 v2, vec3 v3);
		void createMat4x4(mat4x4& mat, vec4 v1, vec4 v2, vec4 v3, vec4 v4);

		mat2x2 assignMat2x2(vec2 v1, vec2 v2);
		mat3x3 assignMat3x3(vec3 v1, vec3 v2, vec3 v3);
		mat4x4 assignMat4x4(vec4 v1, vec4 v2, vec4 v3, vec4 v4);
		// Multiply matrices

		mat2x2 mulToMat2x2(mat2x1 mat1, mat1x2 mat2);
		mat3x3 mulToMat3x3(mat3x1 mat1, mat1x3 mat2);
		mat4x4 mulToMat4x4(mat4x1 mat1, mat1x4 mat2);

		mat2x1 mulToMat2x1(mat2x2 mat1, mat2x1 mat2);
		mat3x1 mulToMat3x1(mat3x3 mat1, mat3x1 mat2);
		mat4x1 mulToMat4x1(mat4x4 mat1, mat4x1 mat2);

		float mul2Mat1x1(mat1x2 mat1, mat2x1 mat2);
		float mul3Mat1x1(mat1x3 mat1, mat3x1 mat2);
		float mul4Mat1x1(mat1x4 mat1, mat4x1 mat2);

		// Comparing 2 matrices

		BOOL equalMat1x2(mat1x2 mat1, mat1x2 mat2);
		BOOL equalMat1x3(mat1x3 mat1, mat1x3 mat2);
		BOOL equalMat1x4(mat1x4 mat1, mat1x4 mat2);

		BOOL equalMat2x1(mat2x1 mat1, mat2x1 mat2);
		BOOL equalMat3x1(mat3x1 mat1, mat3x1 mat2);
		BOOL equalMat4x1(mat4x1 mat1, mat4x1 mat2);

		BOOL equalMat2x2(mat2x2 mat1, mat2x2 mat2);
		BOOL equalMat3x3(mat3x3 mat1, mat3x3 mat2);
		BOOL equalMat4x4(mat4x4 mat1, mat4x4 mat2);

		BOOL greaterMat1x2(mat1x2 mat1, mat1x2 mat2);
		BOOL greaterMat1x3(mat1x3 mat1, mat1x3 mat2);
		BOOL greaterMat1x4(mat1x4 mat1, mat1x4 mat2);

		BOOL greaterMat2x1(mat2x1 mat1, mat2x1 mat2);
		BOOL greaterMat3x1(mat3x1 mat1, mat3x1 mat2);
		BOOL greaterMat4x1(mat4x1 mat1, mat4x1 mat2);

		BOOL greaterMat2x2(mat2x2 mat1, mat2x2 mat2);
		BOOL greaterMat3x3(mat3x3 mat1, mat3x3 mat2);
		BOOL greaterMat4x4(mat4x4 mat1, mat4x4 mat2);

		BOOL lesserMat1x2(mat1x2 mat1, mat1x2 mat2);
		BOOL lesserMat1x3(mat1x3 mat1, mat1x3 mat2);
		BOOL lesserMat1x4(mat1x4 mat1, mat1x4 mat2);

		BOOL lesserMat2x1(mat2x1 mat1, mat2x1 mat2);
		BOOL lesserMat3x1(mat3x1 mat1, mat3x1 mat2);
		BOOL lesserMat4x1(mat4x1 mat1, mat4x1 mat2);

		BOOL lesserMat2x2(mat2x2 mat1, mat2x2 mat2);
		BOOL lesserMat3x3(mat3x3 mat1, mat3x3 mat2);
		BOOL lesserMat4x4(mat4x4 mat1, mat4x4 mat2);
	#ifdef __cpluscplus
		}
	#endif
#endif //MATRIX_H_