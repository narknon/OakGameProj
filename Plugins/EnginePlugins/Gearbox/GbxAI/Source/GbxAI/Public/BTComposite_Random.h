#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Selector.h"
#include "BTRandomEntrySettings.h"
#include "BTComposite_Random.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UBTComposite_Random : public UBTComposite_Selector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, NoClear)
    TArray<FBTRandomEntrySettings> Entries;
    
    UBTComposite_Random();
};

