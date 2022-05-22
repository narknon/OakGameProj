#pragma once
#include "CoreMinimal.h"
#include "DialogAudioComponentProvider.h"
#include "DialogAudioComponentProvider_OcclusionResistant.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXDIALOG_API UDialogAudioComponentProvider_OcclusionResistant : public UDialogAudioComponentProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OcclusionWeight;
    
    UPROPERTY(EditAnywhere)
    FName ComponentTag;
    
    UDialogAudioComponentProvider_OcclusionResistant();
};

