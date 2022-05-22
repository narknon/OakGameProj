#pragma once
#include "CoreMinimal.h"
#include "EGFxMenuTutorialFocusDirection.h"
#include "EGFxMenuTutorialDialogSize.h"
#include "UObject/NoExportTypes.h"
#include "GFxMenuTutorialState.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMenuTutorialState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGFxMenuTutorialDialogSize DialogSize;
    
    UPROPERTY(EditAnywhere)
    EGFxMenuTutorialFocusDirection FocusDirection;
    
    UPROPERTY(EditAnywhere)
    EGFxMenuTutorialFocusDirection SplitScreenFocusDirection;
    
    UPROPERTY(EditAnywhere)
    EGFxMenuTutorialFocusDirection VerticalSplitScreenFocusDirection;
    
    UPROPERTY(EditAnywhere)
    EGFxMenuTutorialFocusDirection QuadSplitScreenFocusDirection;
    
    UPROPERTY(EditAnywhere)
    FVector2D DialogOffset;
    
    UPROPERTY(EditAnywhere)
    FVector2D SplitScreenDialogOffset;
    
    UPROPERTY(EditAnywhere)
    FVector2D VerticalSplitScreenDialogOffset;
    
    UPROPERTY(EditAnywhere)
    FVector2D QuadSplitScreenDialogOffset;
    
    UPROPERTY(EditAnywhere)
    FText HeaderText;
    
    UPROPERTY(EditAnywhere)
    FText BodyText;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> VisibleTintClipsNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SplitScreenVisibleTintClipsNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> VerticalSplitScreenVisibleTintClipsNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> QuadSplitScreenVisibleTintClipsNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AllowedInputAxes;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AllowedInputActions;
    
    UPROPERTY(EditAnywhere)
    bool bAdvanceOnKeyPress;
    
    UPROPERTY(EditAnywhere)
    bool bAllowTutorialSkip;
    
    FGFxMenuTutorialState();
};

