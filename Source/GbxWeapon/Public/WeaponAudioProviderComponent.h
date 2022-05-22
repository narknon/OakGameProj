#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponAudioProviderComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponAudioProviderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWeaponAudioProviderComponent();
};

