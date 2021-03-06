#pragma once
#include "cocos2d.h"
#include "WinEffects.h"
#include <vector>
#include "Slot.h"

class SlotsController {
public:
	SlotsController();
	~SlotsController();

	void Link(WinEffects *winEffects);

	//������� ������� ��� ��� �����
	void AddSprite(cocos2d::Sprite *sprite);
	//������� ���� �� ������� slotPos. ���������� ���� ���� ��� ������� AddSprite().
	void AddSlot(cocos2d::Scene *scene, cocos2d::Vec2 slotPos);

	//������ ������ 2 ������ Roll() ���������
	void EnableDebugMode() { isInDebugMode = true; }
	void DisableDebugMode() { isInDebugMode = false; }

	void Roll();

	bool IsWin();

	void SetDurationForRoll(float _durationForRoll) { durationForRoll = _durationForRoll; }
	void SetMaxRotates(float _maxRotates) { maxRotates = _maxRotates; }

	void SetIsAnimationPlaying(bool _isAnimationPlaying) { isAnimationPlaying = _isAnimationPlaying; }
	bool GetIsAnimationPlaying() { return isAnimationPlaying; }

private:
	cocos2d::Scene *scene;
	std::vector<cocos2d::Sprite*> sprites;
	std::vector<Slot> slots;

	WinEffects *winEffects;

	int rollCnt;
	float durationForRoll;
	char  maxRotates;
	bool isAnimationPlaying;
	bool isInDebugMode;
};
