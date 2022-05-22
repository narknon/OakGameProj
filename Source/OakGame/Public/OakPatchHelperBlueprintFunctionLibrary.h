#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OakPatchHelperBlueprintFunctionLibrary.generated.h"

class UObject;
class AActor;
class UStanceDataProvider;
class UActorComponent;

UCLASS(BlueprintType)
class UOakPatchHelperBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakPatchHelperBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAKLIVE_4119(UObject* WorldContextObject, const FString& ToLayer, float TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAKLIVE_1578(AActor* Target, AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, UStanceDataProvider* OptionalStance);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAK_216536_OnScriptedMoveComplete2();
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAK_216536_OnScriptedMoveComplete1();
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAK_216536_MRE_MoxxiTokenDone();
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAK_216536_MRE_GivePiecesComplete();
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAK_210096_TriggerUntouched(AActor* LeavingActor, bool bIsPlayer);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAK_210096_TriggerTouched(AActor* TouchingActor, bool bIsPlayer, UActorComponent* ComponentTouched);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintFix_OAK_210015();
    
};

