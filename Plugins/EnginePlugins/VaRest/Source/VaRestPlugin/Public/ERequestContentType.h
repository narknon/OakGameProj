#pragma once
#include "CoreMinimal.h"
#include "ERequestContentType.generated.h"

UENUM(BlueprintType)
enum class ERequestContentType : uint8 {
    x_www_form_urlencoded_url,
    x_www_form_urlencoded_body,
    json,
    binary,
};

