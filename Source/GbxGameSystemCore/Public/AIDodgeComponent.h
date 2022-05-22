#pragma once
#include "CoreMinimal.h"
#include "AIDodgeInstance.h"
#include "Components/ActorComponent.h"
#include "AIDodgeData.h"
#include "OnDodgedDelegate.h"
#include "AIDodgeBasicData.h"
#include "GbxParam.h"
#include "EAIDodgeType.h"
#include "UObject/NoExportTypes.h"
#include "AIDodgeComponent.generated.h"

class UBlackboardComponent;
class AActor;
class UTeamComponent;
class UGbxActionComponent;
class UBrainComponent;
class UNavComponent;
class UGbxCharacterMovementComponent;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UAIDodgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsDodging;
    
private:
    UPROPERTY(EditAnywhere)
    FAIDodgeData DodgeBullet;
    
    UPROPERTY(EditAnywhere)
    FAIDodgeData DodgeGrenade;
    
    UPROPERTY(EditAnywhere)
    FAIDodgeBasicData DodgeRandom;
    
    UPROPERTY(EditAnywhere)
    FAIDodgeData DodgeZone;
    
    UPROPERTY(EditAnywhere)
    FGbxParam GlobalCooldown;
    
    UPROPERTY(BlueprintAssignable)
    FOnDodged OnDodged;
    
    UPROPERTY(Export, Transient)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* ActionComponent;
    
    UPROPERTY(Export, Transient)
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(Export, Transient)
    UBrainComponent* BrainComponent;
    
    UPROPERTY(Export, Transient)
    UNavComponent* NavComponent;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(Transient)
    FAIDodgeInstance PendingDodge;
    
    UPROPERTY(Transient)
    FAIDodgeInstance ActiveDodge;
    
public:
    UAIDodgeComponent();
    UFUNCTION(BlueprintCallable)
    static void TriggerZoneDodge(UObject* WorldContextObject, AActor* TargetActor, const FVector& ZoneLoc, const FVector& ZoneVel, AActor* ActorRef);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerGrenadeDodge(UObject* WorldContextObject, const FVector& GrenadeLoc, AActor* Instigator, float ExtraDelay);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerDodge(EAIDodgeType Type, const FVector& SourceLoc, AActor* SourceActor, float ExtraDelay, bool bForced);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerBulletDodge(UObject* WorldContextObject, const FVector& MuzzleLoc, const FVector& BulletVel, AActor* Instigator);
    
};

