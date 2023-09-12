#include "SceneController.h"

void SceneController::Update()
{
	if (Input::GetInstance().PressedKeyNow(VK_F1))
	{
		CoreSystem::GetInstance().GetSceneManager()->LoadScene(L"SampleScene");
	}

	if (Input::GetInstance().PressedKeyNow(VK_F2))
	{
		CoreSystem::GetInstance().GetSceneManager()->LoadScene(L"SampleScene5");
	}

	if (Input::GetInstance().PressedKeyNow(VK_F3))
	{
		CoreSystem::GetInstance().GetSceneManager()->LoadScene(L"SampleScene3");
	}

	if (Input::GetInstance().PressedKeyNow(VK_F4))
	{
		CoreSystem::GetInstance().GetSceneManager()->LoadScene(L"SampleScene4");
	}



	if (Input::GetInstance().PressedKeyNow(VK_F6))
	{
		CoreSystem::GetInstance().GetSceneManager()->LoadScene(L"MainScene");
	}

	if (Input::GetInstance().PressedKeyNow(VK_F7))
	{
		CoreSystem::GetInstance().GetSceneManager()->LoadScene(L"Stage1_4");
	}


	if (Input::GetInstance().PressedKeyNow(VK_F8))
	{

	}

	if (Input::GetInstance().PressedKeyNow(VK_F9))
	{

	}

	if (Input::GetInstance().PressedKeyNow(VK_BACK))
	{
		CoreSystem::GetInstance().GetSceneManager()->LoadScene(L"SampleScene6");
	}

}
