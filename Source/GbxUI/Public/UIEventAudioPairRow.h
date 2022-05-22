#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIEventAudioPairRow.generated.h"

class UWwiseEvent;

USTRUCT()
struct FUIEventAudioPairRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* WwiseSound;
    
    GBXUI_API FUIEventAudioPairRow();
};

