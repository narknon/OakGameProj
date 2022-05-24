#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxFlag.h"
#include "GbxFlagFunctionLibrary.generated.h"

class UObject;
class UGbxFlagData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxFlagFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxFlagFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetFlagValue(UObject* WorldContextObject, UPARAM(Ref) FGbxFlag& Flag, bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlagTrueTimed(UObject* WorldContextObject, UPARAM(Ref) FGbxFlag& Flag, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlagDataValue(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlagDataTrueTimed(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float Duration);
    
    UFUNCTION(BlueprintPure)
    static bool GetFlagValue(UObject* WorldContextObject, const FGbxFlag& Flag);
    
    UFUNCTION(BlueprintPure)
    static bool GetFlagDataValue(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource);
    
    UFUNCTION(BlueprintPure)
    static bool FlagTrueWithin(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime);
    
    UFUNCTION(BlueprintPure)
    static bool FlagTrueFor(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime);
    
    UFUNCTION(BlueprintPure)
    static bool FlagFalseWithin(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime);
    
    UFUNCTION(BlueprintPure)
    static bool FlagFalseFor(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime);
    
    UFUNCTION(BlueprintPure)
    static bool FlagDataTrueWithin(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime);
    
    UFUNCTION(BlueprintPure)
    static bool FlagDataTrueFor(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime);
    
    UFUNCTION(BlueprintPure)
    static bool FlagDataFalseWithin(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime);
    
    UFUNCTION(BlueprintPure)
    static bool FlagDataFalseFor(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime);
    
};

