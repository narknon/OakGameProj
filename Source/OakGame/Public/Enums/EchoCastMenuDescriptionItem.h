#pragma once
#include "CoreMinimal.h"
#include "OptionDescriptionItem.h"
#include "EchoCastMenuDescriptionItem.generated.h"

class UOakStreamingInteractionEvent;

UCLASS(CollapseCategories, EditInlineNew)
class UEchoCastMenuDescriptionItem : public UOptionDescriptionItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    UPROPERTY(EditAnywhere)
    UOakStreamingInteractionEvent* StreamingInteractionEvent;
    
    UEchoCastMenuDescriptionItem();
};

