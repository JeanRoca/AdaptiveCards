// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveToggleVisibilityAction.h"
#include "AdaptiveToggleVisibilityActionParser.h"
#include "AdaptiveElementParserRegistration.h"

using namespace ABI::AdaptiveCards::Rendering::Uwp;
using namespace Microsoft::WRL;

namespace AdaptiveCards::ObjectModel::Uwp
{
    HRESULT AdaptiveToggleVisibilityActionParser::RuntimeClassInitialize() noexcept
    try
    {
        return S_OK;
    }
    CATCH_RETURN;

    HRESULT AdaptiveToggleVisibilityActionParser::FromJson(
        _In_ ABI::Windows::Data::Json::IJsonObject* jsonObject,
        _In_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveElementParserRegistration* elementParserRegistration,
        _In_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveActionParserRegistration* actionParserRegistration,
        _In_ ABI::Windows::Foundation::Collections::IVector<ABI::AdaptiveCards::Rendering::Uwp::AdaptiveWarning*>* adaptiveWarnings,
        _COM_Outptr_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveActionElement** element) noexcept
    try
    {
        return AdaptiveCards::ObjectModel::Uwp::FromJson<AdaptiveCards::ObjectModel::Uwp::AdaptiveToggleVisibilityAction, AdaptiveCards::ToggleVisibilityAction, AdaptiveCards::ToggleVisibilityActionParser>(
            jsonObject, elementParserRegistration, actionParserRegistration, adaptiveWarnings, element);
    }
    CATCH_RETURN;
}
