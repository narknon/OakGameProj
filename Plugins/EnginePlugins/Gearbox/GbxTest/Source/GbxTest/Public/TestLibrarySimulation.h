#pragma once
#include "CoreMinimal.h"
#include "GbxProbeId.h"
#include "ETestIssueType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECompare.h"
#include "Engine/LatentActionManager.h"
#include "GbxTestInputAction.h"
#include "TestLibrarySimulation.generated.h"

class UObject;
class APlayerController;
class UTestPolicySimulation;

UCLASS(BlueprintType)
class UTestLibrarySimulation : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTestLibrarySimulation();
    UFUNCTION(BlueprintCallable)
    static void TestIntInRangeFromPlayMap(const int32& Value, int32 Min, int32 Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    static void TestIntCompareFromPlayMap(const int32& Value, int32 Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    static void TestFloatInRangeFromPlayMap(const float& Value, float Min, float Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    static void TestFloatCompareFromPlayMap(const float& Value, float Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage, float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    static void TestBoolIsTrueFromPlayMap(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    static void TestBoolIsFalseFromPlayMap(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    static void StopPlayTest();
    
    UFUNCTION(BlueprintCallable)
    static void SimulatePlayerInput(UObject* WorldContextObject, UPARAM(Ref) APlayerController*& PlayerController, const TArray<FGbxTestInputAction>& InputDescription, float PreDelay, float PostDelay, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetReportContext(UObject* WorldContextObject, const TArray<FGbxProbeId>& AssetContexts);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReceiveBackgroundInput(UPARAM(Ref) APlayerController*& PlayerController, bool AllowBackgroundInput);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTestTimeout();
    
    UFUNCTION(BlueprintCallable)
    static void ReportResultFromPlayMap(bool bSucceeded, const FString& IssueCategory, const FString& IssueMessage, FGbxProbeId AssetContext, ETestIssueType FailedIssueType);
    
    UFUNCTION(BlueprintCallable)
    static void ReportIssueFromPlayMap(ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    static void PushWorldContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PushAssetContext(FGbxProbeId ID);
    
    UFUNCTION(BlueprintCallable)
    static void PopWorldContext();
    
    UFUNCTION(BlueprintCallable)
    static void PopAssetContext(FGbxProbeId ID);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayMapRunning();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHLQNoClipEnabled(UPARAM(Ref) APlayerController*& PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGodEnabled(UPARAM(Ref) APlayerController*& PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGhostEnabled(UPARAM(Ref) APlayerController*& PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDemiGodEnabled(UPARAM(Ref) APlayerController*& PlayerController);
    
    UFUNCTION(BlueprintPure)
    static UTestPolicySimulation* GetPolicyForPlayMap();
    
    UFUNCTION(BlueprintCallable)
    static bool CanReceiveBackgroundInput(UPARAM(Ref) APlayerController*& PlayerController);
    
};

