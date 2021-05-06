// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "AdaptiveCards.ObjectModel.Uwp.h"

namespace AdaptiveCards::ObjectModel::Uwp
{
    class AdaptiveOpenUrlActionParser
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveActionParser>
    {
        AdaptiveRuntime(AdaptiveOpenUrlActionParser);

    public:
        HRESULT RuntimeClassInitialize() noexcept;

        IFACEMETHODIMP FromJson(
            _In_ ABI::Windows::Data::Json::IJsonObject* jsonObject,
            _In_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveElementParserRegistration* elementParserRegistration,
            _In_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveActionParserRegistration* actionParserRegistration,
            _In_ ABI::Windows::Foundation::Collections::IVector<ABI::AdaptiveCards::Rendering::Uwp::AdaptiveWarning*>* adaptiveWarnings,
            _COM_Outptr_ ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveActionElement** element) noexcept override;
    };

    ActivatableClass(AdaptiveOpenUrlActionParser);
}
