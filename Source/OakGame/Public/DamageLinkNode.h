#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObject.h"
#include "AttributeInitializationData.h"
#include "RangedDistanceOverrides.h"
#include "DamageLinkNode.generated.h"

class UOakDamageComponent;
class UOakLightBeamData;
class UParticleSystem;
class UDamageData;
class UFeedbackData;
class UTargetableComponent;

UCLASS()
class ADamageLinkNode : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLinkingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LinkBeamSocket;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakLightBeamData> NodeLinkBeam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAttributeInitializationData NodeLinkDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAttributeInitializationData NodeLinkDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseNodeLinkDamage;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakLightBeamData> EnemyLinkBeam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAttributeInitializationData EnemyLinkDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAttributeInitializationData EnemyLinkDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageData> EnemyLinkDamageData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseEnemyLinkDamageData;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DeathFX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFeedbackData* RumbleData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRangedDistanceOverrides RumbleDistanceOverrides;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageComponent* OakDamage;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTargetableComponent* Targetable;
    
    ADamageLinkNode();
    UFUNCTION()
    void GetAvailableSocketNames(TArray<FName>& Array) const;
    
};

