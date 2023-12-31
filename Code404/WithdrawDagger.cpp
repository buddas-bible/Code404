#include "WithdrawDagger.h"

#include "UniqueDagger.h"

WithdrawDagger::WithdrawDagger(Vector2D* userdirection, Transform* usertransform, float* usermp, bool* uniquecost1, bool* uniquecost2) :
	Skill(
		userdirection,
		usertransform,
		uniquecost1,
		uniquecost2,
		usermp,
		0.0f,		// 기본 마나소모량
		0.0f,		// 레벨 계수
		0.0f,		// 레벨 승수
		0.0f,		// 연속사용 계수
		0.0f,		// 연속사용 승수
		1,			// 레벨
		1,			// 최대 레벨
		0.3f,		// 쿨타임
		5.0f,		// 반복사용 초기화 시간
		false		// 음수 마나 비용 허용
	),
	targetDagger(nullptr)
{

}

void WithdrawDagger::SetTargetDagger(GameObject* dagger)
{
	targetDagger = dagger;
}

void WithdrawDagger::Use()
{
	targetDagger->GetComponent<UniqueDagger>()->Withdraw();
}
