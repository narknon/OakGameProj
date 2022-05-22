#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogAudioComponentProvider.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXDIALOG_API UDialogAudioComponentProvider : public UObject {
    GENERATED_BODY()
public:
    UDialogAudioComponentProvider();
};

