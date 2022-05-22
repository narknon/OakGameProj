#pragma once
#include "CoreMinimal.h"
#include "GbxGFxDialogBox.h"
#include "ReportReason.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxReportPlayerDialogBox.generated.h"

class UGbxGFxGridScrollingList;
class UGbxGFxButton;

UCLASS()
class UGbxGFxReportPlayerDialogBox : public UGbxGFxDialogBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FReportReason> ReportReasons;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ReportReasonList;
    
public:
    UGbxGFxReportPlayerDialogBox();
private:
    UFUNCTION()
    void OnReportReasonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

