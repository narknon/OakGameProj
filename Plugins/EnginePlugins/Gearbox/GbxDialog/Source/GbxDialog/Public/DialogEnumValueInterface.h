#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DialogEnumValueInterface.generated.h"

class UDialogEnumValue;
class UDialogEnumType;

UINTERFACE(Blueprintable)
class GBXDIALOG_API UDialogEnumValueInterface : public UInterface {
    GENERATED_BODY()
};

class GBXDIALOG_API IDialogEnumValueInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDialogEnumValue* GetEnumValue(const UDialogEnumType* EnumType) const;
    
};

