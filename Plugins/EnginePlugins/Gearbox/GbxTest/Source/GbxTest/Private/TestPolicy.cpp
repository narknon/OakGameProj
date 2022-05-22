#include "TestPolicy.h"

class UObject;

void UTestPolicy::TestIntInRange(const int32& Value, int32 Min, int32 Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestPolicy::TestIntCompare(const int32& Value, int32 Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestPolicy::TestFloatInRange(const float& Value, float Min, float Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestPolicy::TestFloatCompare(const float& Value, float Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage, float Tolerance) {
}

void UTestPolicy::TestBoolIsTrue(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestPolicy::TestBoolIsFalse(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestPolicy::TestAssetTraits(const UObject* Asset) {
}

void UTestPolicy::TestAssetAudit(const UObject* Asset) {
}

void UTestPolicy::SetReportContext(UObject* WorldContextObject, const TArray<FGbxProbeId>& AssetContexts) {
}

void UTestPolicy::ReportResult(bool bSucceeded, const FString& IssueCategory, const FString& IssueMessage, FGbxProbeId AssetContext, ETestIssueType FailedIssueType) {
}

void UTestPolicy::ReportIssue(ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestPolicy::PushAssetContext(FGbxProbeId ID) {
}

void UTestPolicy::PopAssetContext(FGbxProbeId ID) {
}

void UTestPolicy::OnRunTestCommand_Implementation(const FString& TestCommand) {
}

void UTestPolicy::OnGetTestCommands_Implementation(TArray<FString>& TestCommands, TArray<FString>& PrettyNames) const {
}

void UTestPolicy::ClearSavedTestCommand() {
}

UTestPolicy::UTestPolicy() {
    this->DiscoveryMethod = EDiscovery::Ignore;
    this->TestPlan = EGbxTestPlan::None;
}

