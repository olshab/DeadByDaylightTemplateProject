#include "TerrorRadiusEmitterComponent.h"

class UTerrorRadiusReceiverComponent;

void UTerrorRadiusEmitterComponent::SetTerrorRadius(float radius)
{

}

void UTerrorRadiusEmitterComponent::SetSimulatedFixedDistance(float distance)
{

}

void UTerrorRadiusEmitterComponent::SetIsFakeTerrorRadius(bool value)
{

}

void UTerrorRadiusEmitterComponent::SetImitatesAudioOnly(bool imitatesAudioOnly)
{

}

void UTerrorRadiusEmitterComponent::SetEmitterActive(bool active)
{

}

bool UTerrorRadiusEmitterComponent::IsInTerrorRadius(UTerrorRadiusReceiverComponent* receiver) const
{
	return false;
}

float UTerrorRadiusEmitterComponent::GetSimulatedFixedDistance() const
{
	return 0.0f;
}

float UTerrorRadiusEmitterComponent::GetRadius() const
{
	return 0.0f;
}

bool UTerrorRadiusEmitterComponent::GetIsActive() const
{
	return false;
}

bool UTerrorRadiusEmitterComponent::GetImitatesAudioOnly() const
{
	return false;
}

UTerrorRadiusEmitterComponent::UTerrorRadiusEmitterComponent()
{
	this->_simulatedFixedDistance = -1.000000;
	this->_imitatesAudioOnly = true;
	this->_active = true;
	this->_isFakeTerrorRadius = false;
	this->_radius = 0.000000;
	this->_receiversInTerrorRadiusMap = TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool>();
	this->_receiversPhysicallyInRadiusRangeMap = TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool>();
}
