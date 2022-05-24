#pragma once
#include "CoreMinimal.h"
#include "ETestIssueType.h"
#include "UObject/Object.h"
#include "EGbxTestPlan.h"
#include "EDiscovery.h"
#include "ECompare.h"
#include "GbxProbeId.h"
#include "TestPolicy.generated.h"

class UGbxTestHierarchicalCommands;

UCLASS(Blueprintable)
class UTestPolicy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditDefaultsOnly)
    EDiscovery DiscoveryMethod;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UGbxTestHierarchicalCommands> HierarchicalCommands;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditDefaultsOnly)
    FString Contact;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditDefaultsOnly)
    EGbxTestPlan TestPlan;
    
    UTestPolicy();
    UFUNCTION(BlueprintCallable)
    void TestIntInRange(const int32& Value, int32 Min, int32 Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    void TestIntCompare(const int32& Value, int32 Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    void TestFloatInRange(const float& Value, float Min, float Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    void TestFloatCompare(const float& Value, float Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage, float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    void TestBoolIsTrue(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    void TestBoolIsFalse(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    void TestAssetTraits(const UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    void TestAssetAudit(const UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetReportContext(UObject* WorldContextObject, const TArray<FGbxProbeId>& AssetContexts);
    
    UFUNCTION(BlueprintCallable)
    void ReportResult(bool bSucceeded, const FString& IssueCategory, const FString& IssueMessage, FGbxProbeId AssetContext, ETestIssueType FailedIssueType);
    
    UFUNCTION(BlueprintCallable)
    void ReportIssue(ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage);
    
    UFUNCTION(BlueprintCallable)
    void PushAssetContext(FGbxProbeId ID);
    
    UFUNCTION(BlueprintCallable)
    void PopAssetContext(FGbxProbeId ID);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnRunTestCommand(const FString& TestCommand);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGetTestCommands(TArray<FString>& TestCommands, TArray<FString>& PrettyNames) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearSavedTestCommand();
    
};

