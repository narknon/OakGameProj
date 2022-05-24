#pragma once
#include "CoreMinimal.h"
#include "HitReactionLayer.h"
#include "HitReactionLayer_Blueprint.generated.h"

class UHitRegionData;
class UHitReactionTag;
class UDamageComponent;
class UGbxDamageType;
class UDamageCauserComponent;
class UDamageSource;

UCLASS(Abstract, Blueprintable, Const)
class GBXGAMESYSTEMCORE_API UHitReactionLayer_Blueprint : public UHitReactionLayer {
    GENERATED_BODY()
public:
    UHitReactionLayer_Blueprint();
    UFUNCTION(BlueprintNativeEvent)
    UHitReactionTag* EvaluateTag(UDamageComponent* Receiver, UDamageCauserComponent* Causer, float DamageAmount, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, UHitRegionData* HitRegion, float Force, UHitReactionTag* PreviousTag) const;
    
};

