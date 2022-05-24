#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxBlackboardKeySelector.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TargetActorInfo.h"
#include "GbxBlackboardKeySelectorExt.generated.h"

class UBlackboardComponent;
class UObject;
class AActor;
class UProperty;

UCLASS(BlueprintType)
class UGbxBlackboardKeySelectorExt : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxBlackboardKeySelectorExt();
    UFUNCTION(BlueprintCallable)
    static void SetValueAsVector(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, FVector Value);
    
    UFUNCTION(BlueprintPure)
    static void SetValueAsTargetActorInfo(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, const FTargetActorInfo& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsString(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsRotator(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsObject(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsName(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, FName Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsInt(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsFloat(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsFlag(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, const bool Value, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsEnum(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsClass(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueAsBool(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, bool Value);
    
    UFUNCTION(BlueprintPure)
    static FVector GetValueAsVector(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static FTargetActorInfo GetValueAsTargetActorInfo(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static FString GetValueAsString(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetValueAsRotator(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetValueAsObject(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static FName GetValueAsName(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static int32 GetValueAsInt(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static float GetValueAsFloat(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetValueAsEnum(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static UClass* GetValueAsClass(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static bool GetValueAsBool(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetValueAsActor(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
    UFUNCTION()
    static FString GetPropertyDescription(const FGbxBlackboardKeySelector& BBKey, UProperty* Property);
    
    UFUNCTION(BlueprintCallable)
    static void ClearValue(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent);
    
};

