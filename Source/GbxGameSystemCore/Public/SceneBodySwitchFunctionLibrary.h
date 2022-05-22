#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SceneBodySwitchFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API USceneBodySwitchFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USceneBodySwitchFunctionLibrary();
private:
    UFUNCTION()
    void EnumerateValidSwitchStateNames(FName SwitchName, TArray<FName>& Names) const;
    
    UFUNCTION()
    void EnumerateValidSwitchNames(TArray<FName>& Names) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ChangeSwitchExternal(AActor* Actor, FName SwitchName, FName StateName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ChangeSwitch(UObject* Context, FName SwitchName, FName StateName);
    
};

