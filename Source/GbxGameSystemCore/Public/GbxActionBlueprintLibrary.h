#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GbxActionRegister.h"
#include "AnimActionDef.h"
#include "GameplayTagContainer.h"
#include "GbxActionBlueprintLibrary.generated.h"

class UGbxAction;
class UGbxAction_Loop;
class AActor;
class UObject;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxActionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxActionBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopLoopingActionClass(TSubclassOf<UGbxAction_Loop> ActionClass, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void StopActionSlot(const FName ActionSlotName, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void StopActions(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void StopActionClass(TSubclassOf<UGbxAction> ActionClass, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> SetObjectGbxActionRegister(UPARAM(Ref) TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, UObject* Value, bool bReplicates);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> SetNameGbxActionRegister(UPARAM(Ref) TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, FName Value, bool bReplicates);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> SetIntGbxActionRegister(UPARAM(Ref) TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, int32 Value, bool bReplicates);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> SetFloatGbxActionRegister(UPARAM(Ref) TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, float Value, bool bReplicates);
    
private:
    UFUNCTION(BlueprintCallable)
    static void K2_UpdateActionPlayRate(UGbxAction* Action, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    static void K2_UpdateActionDirection(UGbxAction* Action, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    static void K2_StopActionObj(UGbxAction* Action, AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    static void K2_ShowGbxActionScreenLogs(bool bShowLogsOnScreen);
    
private:
    UFUNCTION(BlueprintCallable)
    static void K2_Resume(UGbxAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ReplicatedProceedToNextSection(UGbxAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ReplicatedJumpToNextSection(UGbxAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ProceedToNextSection(UGbxAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static void K2_Pause(UGbxAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static void K2_JumpToNextSection(UGbxAction* Action);
    
    UFUNCTION(BlueprintCallable)
    static float K2_GetTimeRemaining(UGbxAction* Target);
    
    UFUNCTION(BlueprintCallable)
    static float K2_GetMaxCurrentTime(UGbxAction* Action);
    
public:
    UFUNCTION(BlueprintCallable)
    static UGbxAction* K2_GetActionByClass(TSubclassOf<UGbxAction> ActionClass, AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static FString GetSummary_AnimActionDef(const FAnimActionDef& AnimActionDef);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UGbxAction> GetKeyedActionClass(FGameplayTag ActionKey, AActor* Target);
    
};

