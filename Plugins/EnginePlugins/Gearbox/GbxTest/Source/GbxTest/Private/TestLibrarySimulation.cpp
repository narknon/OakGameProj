#include "TestLibrarySimulation.h"

class UObject;
class APlayerController;
class UTestPolicySimulation;

void UTestLibrarySimulation::TestIntInRangeFromPlayMap(const int32& Value, int32 Min, int32 Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestLibrarySimulation::TestIntCompareFromPlayMap(const int32& Value, int32 Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestLibrarySimulation::TestFloatInRangeFromPlayMap(const float& Value, float Min, float Max, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestLibrarySimulation::TestFloatCompareFromPlayMap(const float& Value, float Other, ECompare Comparison, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage, float Tolerance) {
}

void UTestLibrarySimulation::TestBoolIsTrueFromPlayMap(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestLibrarySimulation::TestBoolIsFalseFromPlayMap(const bool& Value, ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestLibrarySimulation::StopPlayTest() {
}

void UTestLibrarySimulation::SimulatePlayerInput(UObject* WorldContextObject, APlayerController*& PlayerController, const TArray<FGbxTestInputAction>& InputDescription, float PreDelay, float PostDelay, FLatentActionInfo LatentInfo) {
}

void UTestLibrarySimulation::SetReportContext(UObject* WorldContextObject, const TArray<FGbxProbeId>& AssetContexts) {
}

bool UTestLibrarySimulation::SetReceiveBackgroundInput(APlayerController*& PlayerController, bool AllowBackgroundInput) {
    return false;
}

void UTestLibrarySimulation::ResetTestTimeout() {
}

void UTestLibrarySimulation::ReportResultFromPlayMap(bool bSucceeded, const FString& IssueCategory, const FString& IssueMessage, FGbxProbeId AssetContext, ETestIssueType FailedIssueType) {
}

void UTestLibrarySimulation::ReportIssueFromPlayMap(ETestIssueType IssueType, const FString& IssueCategory, const FString& IssueMessage) {
}

void UTestLibrarySimulation::PushWorldContext(UObject* WorldContextObject) {
}

void UTestLibrarySimulation::PushAssetContext(FGbxProbeId ID) {
}

void UTestLibrarySimulation::PopWorldContext() {
}

void UTestLibrarySimulation::PopAssetContext(FGbxProbeId ID) {
}

bool UTestLibrarySimulation::IsPlayMapRunning() {
    return false;
}

bool UTestLibrarySimulation::IsHLQNoClipEnabled(APlayerController*& PlayerController) {
    return false;
}

bool UTestLibrarySimulation::IsGodEnabled(APlayerController*& PlayerController) {
    return false;
}

bool UTestLibrarySimulation::IsGhostEnabled(APlayerController*& PlayerController) {
    return false;
}

bool UTestLibrarySimulation::IsDemiGodEnabled(APlayerController*& PlayerController) {
    return false;
}

UTestPolicySimulation* UTestLibrarySimulation::GetPolicyForPlayMap() {
    return NULL;
}

bool UTestLibrarySimulation::CanReceiveBackgroundInput(APlayerController*& PlayerController) {
    return false;
}

UTestLibrarySimulation::UTestLibrarySimulation() {
}

