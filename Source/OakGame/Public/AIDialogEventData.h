#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "EAIDodgeType.h"
#include "DodgeVOInfo.h"
#include "AIDialogEventData.generated.h"

class UDamageSource;
class UDialogEvent;
class UDialogEnumValue;
class UDialogParameter;

UCLASS()
class OAKGAME_API UAIDialogEventData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogEvent* TargetAcquiredEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* TargetLostEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* TargetKilledOneEnemyTargetEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* TargetDownEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* TargetDeadEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* ShootingEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* ReloadEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* ReinforcementsEvent;
    
    UPROPERTY(EditAnywhere)
    TMap<EAIDodgeType, FDodgeVOInfo> DodgeVO;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* TargetParam;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* InstigatorParam;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* MethodOfDeathParam;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> ActionSkillDamageSourceClass;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumValue* MethodOfDeath_Normal;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumValue* MethodOfDeath_Gibbed;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumValue* MethodOfDeath_ActionSkill;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* NpcGreetingHelloEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* NpcGreetingHelloMissionEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* NpcGreetingIdleEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* NpcGreetingGoodbyeEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* NpcGreetingTargetParam;
    
    UAIDialogEventData();
};

