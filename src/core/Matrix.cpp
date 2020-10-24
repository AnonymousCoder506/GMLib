#include"core\Matrix.h"

void createRvMat(mat1x2& mat, vec2 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
}

void createRvMat(mat1x3& mat, vec3 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
}

void createRvMat(mat1x4& mat, vec4 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
	mat.mat[0][3] = vec.w;
}

mat1x2 assignRv2Mat(vec2 vec)
{
	mat1x2 mat; 
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	return mat1x2(mat);
}

mat1x3 assignRv3Mat(vec3 vec)
{
	mat1x3 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
	return mat1x3(mat);
}

mat1x4 assignRv4Mat(vec4 vec)
{
	mat1x4 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
	mat.mat[1][3] = vec.w;
	return mat1x4(mat);
}

void createCvMat(mat2x1& mat, vec2 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
}

void createCvMat(mat3x1& mat, vec3 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
}

void createCvMat(mat4x1& mat, vec4 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
	mat.mat[3][0] = vec.w;
}

mat2x1 assignCv2Mat(vec2 vec)
{
	mat2x1 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	return mat2x1(mat);
}

mat3x1 assignCv3Mat(vec3 vec)
{
	mat3x1 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
	return mat3x1(mat);
}

mat4x1 assignCv4Mat(vec4 vec)
{
	mat4x1 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
	mat.mat[3][0] = vec.w;
	return mat4x1(mat);
}

void createMat(mat2x2& mat, vec2 v1, vec2 v2) {
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
}

void createMat(mat3x3& mat, vec3 v1, vec3 v2 , vec3 v3) {
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
}

void createMat(mat4x4& mat, vec4 v1, vec4 v2, vec4 v3 , vec4 v4) {
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	mat.mat[0][3] = v1.w;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	mat.mat[1][3] = v2.w;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
	mat.mat[2][3] = v3.w;
	// forth row
	mat.mat[3][0] = v4.x;
	mat.mat[3][1] = v4.y;
	mat.mat[3][2] = v4.z;
	mat.mat[3][3] = v4.w;
}

mat2x2 assign2Mat(vec2 v1, vec2 v2) {
	mat2x2 mat;
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;

	return mat2x2(mat);
}

mat3x3 assign3Mat(vec3 v1, vec3 v2, vec3 v3) {
	mat3x3 mat;
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
	return mat3x3(mat);
}

mat4x4 assign4Mat(vec4 v1, vec4 v2, vec4 v3, vec4 v4) {
	mat4x4 mat;
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	mat.mat[0][3] = v1.w;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	mat.mat[1][3] = v2.w;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
	mat.mat[2][3] = v3.w;
	// forth row
	mat.mat[3][0] = v4.x;
	mat.mat[3][1] = v4.y;
	mat.mat[3][2] = v4.z;
	mat.mat[3][3] = v4.w;
	return mat4x4(mat);
}

mat2x2 mulToMat(mat2x1 mat1, mat1x2 mat2)
{
	mat2x2 mat; 
	for (int i = 0 ; i < 2; i++ ) {
		for (int j = 0; j < 2; j++) {
			mat.mat[i][j] = mat1.mat[i][0] * mat2.mat[0][j];
		}
	}
	return mat2x2(mat);
}

mat3x3 mulToMat(mat3x1 mat1, mat1x3 mat2)
{
	mat3x3 mat;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat.mat[i][j] = mat1.mat[i][0] * mat2.mat[0][j];
		}
	}
	return mat3x3(mat);
}

mat4x4 mulToMat(mat4x1 mat1, mat1x4 mat2)
{
	mat4x4 mat;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mat.mat[i][j] = mat1.mat[i][0] * mat2.mat[0][j];
		}
	}
	return mat4x4(mat);
}

mat2x1 mulToMat(mat2x2 mat1, mat2x1 mat2)
{
	mat2x1 mat;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mat.mat[i][0] += mat1.mat[i][j] * mat2.mat[j][0];
		}
	}
	return mat2x1(mat);
}

mat3x1 mulToMat(mat3x3 mat1, mat3x1 mat2)
{
	mat3x1 mat;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat.mat[i][0] += mat1.mat[i][j] * mat2.mat[j][0];
		}
	}
	return mat3x1(mat);
}

mat4x1 mulToMat(mat4x4 mat1, mat4x1 mat2)
{
	mat4x1 mat;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mat.mat[i][0] += mat1.mat[i][j] * mat2.mat[j][0];
		}
	}
	return mat4x1(mat);
}

float mul2Mat(mat1x2 mat1, mat2x1 mat2)
{
	float value = 0.0f;
	for (int j = 0; j < 2; j++) {
		value += mat1.mat[0][j] * mat2.mat[j][0];
	}
	return value;
}

float mul3Mat(mat1x3 mat1, mat3x1 mat2)
{
	float value = 0.0f;
	for (int j = 0; j < 3; j++) {
		value += mat1.mat[0][j] * mat2.mat[j][0];
	}
	return value;
}

float mul4Mat(mat1x4 mat1, mat4x1 mat2)
{
	float value = 0.0f;
	for (int j = 0; j < 4; j++) {
		value += mat1.mat[0][j] * mat2.mat[j][0];
	}
	return value;
}

BOOL equalMat(mat1x2 mat1, mat1x2 mat2)
{
	int flag = 0 ; 
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[0][i] != mat2.mat[0][i])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat1x3 mat1, mat1x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[0][i] != mat2.mat[0][i])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat1x4 mat1, mat1x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[0][i] != mat2.mat[0][i])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat2x1 mat1, mat2x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[i][0] != mat2.mat[i][0])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat3x1 mat1, mat3x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[i][0] != mat2.mat[i][0])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat4x1 mat1, mat4x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[i][0] != mat2.mat[i][0])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat2x2 mat1, mat2x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (mat1.mat[i][j] != mat2.mat[i][j])
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat3x3 mat1, mat3x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat1.mat[i][j] != mat2.mat[i][j])
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat(mat4x4 mat1, mat4x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mat1.mat[i][j] != mat2.mat[i][j])
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat1x2 mat1, mat1x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[0][i] > mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat1x3 mat1, mat1x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[0][i] > mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat1x4 mat1, mat1x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[0][i] > mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat2x1 mat1, mat2x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[i][0] > mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat3x1 mat1, mat3x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[i][0] > mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat4x1 mat1, mat4x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[i][0] > mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat2x2 mat1, mat2x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (mat1.mat[i][j] > mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat3x3 mat1, mat3x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat1.mat[i][j] > mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat(mat4x4 mat1, mat4x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mat1.mat[i][j] > mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat1x2 mat1, mat1x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[0][i] < mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat1x3 mat1, mat1x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[0][i] < mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat1x4 mat1, mat1x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[0][i] < mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat2x1 mat1, mat2x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[i][0] < mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat3x1 mat1, mat3x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[i][0] < mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat4x1 mat1, mat4x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[i][0] < mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat2x2 mat1, mat2x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (mat1.mat[i][j] < mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat3x3 mat1, mat3x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat1.mat[i][j] < mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat(mat4x4 mat1, mat4x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mat1.mat[i][j] < mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

void createMat1x2(mat1x2& mat, vec2 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
}

void createMat1x3(mat1x3& mat, vec3 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
}

void createMat1x4(mat1x4& mat, vec4 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
	mat.mat[0][3] = vec.w;
}

mat1x2 assignMat1x2(vec2 vec)
{
	mat1x2 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	return mat;
}

mat1x3 assignMat1x3(vec3 vec)
{
	mat1x3 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
	return mat;
}

mat1x4 assignMat1x4(vec4 vec)
{
	mat1x4 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[0][1] = vec.y;
	mat.mat[0][2] = vec.z;
	mat.mat[1][3] = vec.w;
	return mat;
}

void createMat2x1(mat2x1& mat, vec2 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
}

void createMat3x1(mat3x1& mat, vec3 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
}

void createMat4x1(mat4x1& mat, vec4 vec)
{
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
	mat.mat[3][0] = vec.w;
}

mat2x1 assignMat2x1(vec2 vec)
{
	mat2x1 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	return mat;
}

mat3x1 assignMat3x1(vec3 vec)
{
	mat3x1 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
	return mat;
}

mat4x1 assignMat4x1(vec4 vec)
{
	mat4x1 mat;
	mat.mat[0][0] = vec.x;
	mat.mat[1][0] = vec.y;
	mat.mat[2][0] = vec.z;
	mat.mat[3][0] = vec.w;
	return mat;
}

void createMat2x2(mat2x2& mat, vec2 v1, vec2 v2) {
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
}


void createMat3x3(mat3x3& mat, vec3 v1, vec3 v2, vec3 v3) {
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
}

void createMat4x4(mat4x4& mat, vec4 v1, vec4 v2, vec4 v3, vec4 v4) {
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	mat.mat[0][3] = v1.w;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	mat.mat[1][3] = v2.w;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
	mat.mat[2][3] = v3.w;
	// forth row
	mat.mat[3][0] = v4.x;
	mat.mat[3][1] = v4.y;
	mat.mat[3][2] = v4.z;
	mat.mat[3][3] = v4.w;
}

mat2x2 assignMat2x2(vec2 v1, vec2 v2) {
	mat2x2 mat;
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	return mat;
}

mat3x3 assignMat3x3(vec3 v1, vec3 v2, vec3 v3) {
	mat3x3 mat;
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
	return mat; 
}

mat4x4 assignMat4x4(vec4 v1, vec4 v2, vec4 v3, vec4 v4) {
	mat4x4 mat;
	// first row
	mat.mat[0][0] = v1.x;
	mat.mat[0][1] = v1.y;
	mat.mat[0][2] = v1.z;
	mat.mat[0][3] = v1.w;
	// second row
	mat.mat[1][0] = v2.x;
	mat.mat[1][1] = v2.y;
	mat.mat[1][2] = v2.z;
	mat.mat[1][3] = v2.w;
	// third row
	mat.mat[2][0] = v3.x;
	mat.mat[2][1] = v3.y;
	mat.mat[2][2] = v3.z;
	mat.mat[2][3] = v3.w;
	// forth row
	mat.mat[3][0] = v4.x;
	mat.mat[3][1] = v4.y;
	mat.mat[3][2] = v4.z;
	mat.mat[3][3] = v4.w;
	return mat;
}

mat2x2 mulToMat2x2(mat2x1 mat1, mat1x2 mat2)
{
	mat2x2 mat;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mat.mat[i][j] = mat1.mat[i][0] * mat2.mat[0][j];
		}
	}
	return mat;
}

mat3x3 mulToMat3x3(mat3x1 mat1, mat1x3 mat2)
{
	mat3x3 mat;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat.mat[i][j] = mat1.mat[i][0] * mat2.mat[0][j];
		}
	}
	return mat;
}

mat4x4 mulToMat4x4(mat4x1 mat1, mat1x4 mat2)
{
	mat4x4 mat;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mat.mat[i][j] = mat1.mat[i][0] * mat2.mat[0][j];
		}
	}
	return mat;
}

mat2x1 mulToMat2x1(mat2x2 mat1, mat2x1 mat2)
{
	mat2x1 mat;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mat.mat[i][0] += mat1.mat[i][j] * mat2.mat[j][0];
		}
	}
	return mat;
}

mat3x1 mulToMat3x1(mat3x3 mat1, mat3x1 mat2)
{
	mat3x1 mat;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat.mat[i][0] += mat1.mat[i][j] * mat2.mat[j][0];
		}
	}
	return mat;
}

mat4x1 mulToMat4x1(mat4x4 mat1, mat4x1 mat2)
{
	mat4x1 mat;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mat.mat[i][0] += mat1.mat[i][j] * mat2.mat[j][0];
		}
	}
	return mat;
}

float mul2Mat1x1(mat1x2 mat1, mat2x1 mat2)
{
	float value = 0.0f;
	for (int j = 0; j < 2; j++) {
		value += mat1.mat[0][j] * mat2.mat[j][0];
	}
	return value;
}

float mul3Mat1x1(mat1x3 mat1, mat3x1 mat2)
{
	float value = 0.0f;
	for (int j = 0; j < 3; j++) {
		value += mat1.mat[0][j] * mat2.mat[j][0];
	}
	return value;
}

float mul4Mat1x1(mat1x4 mat1, mat4x1 mat2)
{
	float value = 0.0f;
	for (int j = 0; j < 4; j++) {
		value += mat1.mat[0][j] * mat2.mat[j][0];
	}
	return value;
}

BOOL equalMat1x2(mat1x2 mat1, mat1x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[0][i] != mat2.mat[0][i])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat1x3(mat1x3 mat1, mat1x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[0][i] != mat2.mat[0][i])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat1x4(mat1x4 mat1, mat1x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[0][i] != mat2.mat[0][i])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat2x1(mat2x1 mat1, mat2x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[i][0] != mat2.mat[i][0])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat3x1(mat3x1 mat1, mat3x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[i][0] != mat2.mat[i][0])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat4x1(mat4x1 mat1, mat4x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[i][0] != mat2.mat[i][0])
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat2x2(mat2x2 mat1, mat2x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (mat1.mat[i][j] != mat2.mat[i][j])
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat3x3(mat3x3 mat1, mat3x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat1.mat[i][j] != mat2.mat[i][j])
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL equalMat4x4(mat4x4 mat1, mat4x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mat1.mat[i][j] != mat2.mat[i][j])
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat1x2(mat1x2 mat1, mat1x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[0][i] > mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat1x3(mat1x3 mat1, mat1x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[0][i] > mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat1x4(mat1x4 mat1, mat1x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[0][i] > mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat2x1(mat2x1 mat1, mat2x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[i][0] > mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat3x1(mat3x1 mat1, mat3x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[i][0] > mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat4x1(mat4x1 mat1, mat4x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[i][0] > mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat2x2(mat2x2 mat1, mat2x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (mat1.mat[i][j] > mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat3x3(mat3x3 mat1, mat3x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat1.mat[i][j] > mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL greaterMat4x4(mat4x4 mat1, mat4x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mat1.mat[i][j] > mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat1x2(mat1x2 mat1, mat1x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[0][i] < mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat1x3(mat1x3 mat1, mat1x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[0][i] < mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat1x4(mat1x4 mat1, mat1x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[0][i] < mat2.mat[0][i])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat2x1(mat2x1 mat1, mat2x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (mat1.mat[i][0] < mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat3x1(mat3x1 mat1, mat3x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (mat1.mat[i][0] < mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat4x1(mat4x1 mat1, mat4x1 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (mat1.mat[i][0] < mat2.mat[i][0])
			continue;
		else
			flag++;
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat2x2(mat2x2 mat1, mat2x2 mat2)
{
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (mat1.mat[i][j] < mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat3x3(mat3x3 mat1, mat3x3 mat2)
{
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat1.mat[i][j] < mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}

BOOL lesserMat4x4(mat4x4 mat1, mat4x4 mat2)
{
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mat1.mat[i][j] < mat2.mat[i][j])
				continue;
			else
				flag++;
		}
	}
	if (!flag)
		return true;
	else
		return false;
}