//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCCache, NSColor, NSDictionary;

@interface MSTheme : NSObject
{
    long long _darkModeScheme;
    BOOL _isDark;
    BCCache *_cache;
    NSDictionary *_colorPlist;
}

+ (id)sharedTheme;
+ (void)initialize;
+ (void)setupAppearance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *colorPlist; // @synthesize colorPlist=_colorPlist;
@property(readonly, nonatomic) BCCache *cache; // @synthesize cache=_cache;
@property BOOL isDark; // @synthesize isDark=_isDark;
@property(readonly, nonatomic) BOOL isGraphiteAccentColor;
- (void)warmColorCache;
- (void)changeApplicationAppearanceInBlock:(CDUnknownBlockType)arg1;
- (id)resolvedNamesForBaseName:(id)arg1 options:(unsigned long long)arg2;
- (id)cachedImageForKey:(id)arg1 imageOwner:(id)arg2 createBlock:(CDUnknownBlockType)arg3;
- (id)cachedImageForKey:(id)arg1 imageOwner:(id)arg2;
- (void)cacheImage:(id)arg1 forKey:(id)arg2 imageOwner:(id)arg3;
- (id)tintedImageNamed:(id)arg1 color:(id)arg2;
- (id)systemColorNamed:(id)arg1;
- (id)systemColorConvertedToFixed:(id)arg1;
- (id)_colorForStringValue:(id)arg1 cachingKey:(id)arg2;
- (id)colorForResolvedName:(id)arg1;
- (id)colorNamed:(id)arg1 options:(unsigned long long)arg2;
- (id)colorNamed:(id)arg1;
- (void)updateIsDark;
- (void)setDarkModeScheme:(long long)arg1;
- (long long)darkModeScheme;
- (id)init;
- (id)attributedStringWithString:(id)arg1 color:(id)arg2 controlSize:(unsigned long long)arg3;
- (void)validateColorPlist;
- (void)validate;
@property(readonly, nonatomic) NSColor *hoverButtonNormalColor;
@property(readonly, nonatomic) NSColor *hoverButtonHoverColor;
@property(readonly, nonatomic) NSColor *componentsColor;
@property(readonly, nonatomic) NSColor *componentsItemBackgroundColor;
@property(readonly, nonatomic) NSColor *componentsPanelTextItemMissingFontBackgroundColor;
@property(readonly, nonatomic) NSColor *cloudIntroButtonBackgroundColorPressed;
@property(readonly, nonatomic) NSColor *cloudIntroButtonBackgroundColor;
@property(readonly, nonatomic) NSColor *documentsWindowStatusIconColorSelected;
@property(readonly, nonatomic) NSColor *documentsWindowStatusIconColor;
@property(readonly, nonatomic) NSColor *documentsWindowWidgetColorPressed;
@property(readonly, nonatomic) NSColor *documentsWindowLocalDocumentBorderColor;
@property(readonly, nonatomic) NSColor *documentsWindowLocalDocumentButtonSecondInnerShadowColor;
@property(readonly, nonatomic) NSColor *documentsWindowLocalDocumentButtonInnerShadowColor;
@property(readonly, nonatomic) NSColor *documentsWindowLocalDocumentButtonBackgroundHighlightColor;
@property(readonly, nonatomic) NSColor *documentsWindowLocalDocumentButtonBackgroundColor;
@property(readonly, nonatomic) NSColor *documentsWindowSeperatorColor;
@property(readonly, nonatomic) NSColor *windowBadgeUnfocusedPillColor;
@property(readonly, nonatomic) NSColor *windowBadgeTextColor;
@property(readonly, nonatomic) NSColor *windowBadgeMultipleNotificationsColor;
@property(readonly, nonatomic) NSColor *windowBadgeTrialMessageColor;
@property(readonly, nonatomic) NSColor *cloudPopoverCancelButtonTintColorPressed;
@property(readonly, nonatomic) NSColor *cloudPopoverCancelButtonTintColor;
@property(readonly, nonatomic) NSColor *cloudPopoverButtonTintColorPressed;
@property(readonly, nonatomic) NSColor *cloudPopoverButtonTintColor;
@property(readonly, nonatomic) NSColor *windowBadgePluginUpdatesAvailableColor;
@property(readonly, nonatomic) NSColor *windowBadgeLibraryChangesAvailableColor;
@property(readonly, nonatomic) NSColor *windowBadgeFontsMissingColor;
@property(readonly, nonatomic) NSColor *preferencesAssetLibraryHeaderBorderColor;
@property(readonly, nonatomic) NSColor *preferencesAssetLibraryHeaderBackgroundColor;
@property(readonly, nonatomic) NSColor *preferencesAccountBoxBackgroundColor;
@property(readonly, nonatomic) NSColor *preferencesWindowErrorTextColor;
@property(readonly, nonatomic) NSColor *licenseWindowErrorTextColor;
@property(readonly, nonatomic) NSColor *documentsWindowBannerBorderColor;
@property(readonly, nonatomic) NSColor *documentsWindowBannerButtonColor;
@property(readonly, nonatomic) NSColor *documentsWindowBannerTextColor;
@property(readonly, nonatomic) NSColor *documentsWindowBannerBackgroundColor;
@property(readonly, nonatomic) NSColor *documentsWindowUnemphasizedTextSelectionColor;
@property(readonly, nonatomic) NSColor *documentsWindowUnemphasizedThumbnailBorderColor;
@property(readonly, nonatomic) NSColor *documentsWindowThumbnailBorderColor;
@property(readonly, nonatomic) NSColor *documentItemOverlayColor;
@property(readonly, nonatomic) NSColor *documentsWindowUnemphasizedSelectionColor;
@property(readonly, nonatomic) NSColor *overlayButtonBackground;
@property(readonly, nonatomic) NSColor *assetPickerItemGridHighlightColor;
@property(readonly, nonatomic) NSColor *assetPickerImageItemBackgroundColor;
@property(readonly, nonatomic) NSColor *assetPickerItemBorderColor;
@property(readonly, nonatomic) NSColor *colorPickerCheckerboardForeground;
@property(readonly, nonatomic) NSColor *colorPickerColorControlsKnobBorder;
@property(readonly, nonatomic) NSColor *colorPickerColorControlsBorder;
@property(readonly, nonatomic) NSColor *colorPickerModelPickerBackgroundColorActive;
@property(readonly, nonatomic) NSColor *colorPickerModelPickerBackgroundColor;
@property(readonly, nonatomic) NSColor *colorPickerSeparatorColor;
@property(readonly, nonatomic) NSColor *colorPickerMarkerShadowColor;
@property(readonly, nonatomic) NSColor *colorPickerMarkerFillColor;
@property(readonly, nonatomic) NSColor *colorPickerCheckerboardBorderColor;
@property(readonly, nonatomic) NSColor *colorPickerCheckerboardBackgroundColor;
@property(readonly, nonatomic) NSColor *colorPickerModifiedAssetIndicatorBorder;
@property(readonly, nonatomic) NSColor *colorPickerAssetBorderColor;
@property(readonly, nonatomic) NSColor *colorPickerFrequentImageBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasViewportGuideColor;
@property(readonly, nonatomic) NSColor *canvasOverrideSelectionBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasSymbolTitleColor;
@property(readonly, nonatomic) NSColor *canvasSliceOutlineColor;
@property(readonly, nonatomic) NSColor *canvasRulerTextBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasRulerTextColor;
@property(readonly, nonatomic) NSColor *canvasRulerOccupiedColor;
@property(readonly, nonatomic) NSColor *canvasRulerLockPressedColor;
@property(readonly, nonatomic) NSColor *canvasRulerLockColor;
@property(readonly, nonatomic) NSColor *canvasRulerLineOccupiedColor;
@property(readonly, nonatomic) NSColor *canvasRulerLineColor;
@property(readonly, nonatomic) NSColor *canvasRulerBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasPixelLineColor;
@property(readonly, nonatomic) NSColor *canvasLightModePageBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasDarkModePageBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasPageBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasMeasurementLabelBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasLayerSelectionColor;
@property(readonly, nonatomic) NSColor *canvasLayerHighlightColor;
@property(readonly, nonatomic) NSColor *canvasFlowDestinationIndicatorColor;
@property(readonly, nonatomic) NSColor *canvasFlowArrowColor;
@property(readonly, nonatomic) NSColor *canvasLightModeBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasDarkModeBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasBackgroundColor;
@property(readonly, nonatomic) NSColor *canvasLightModeArtboardTitleColor;
@property(readonly, nonatomic) NSColor *canvasDarkModeArtboardTitleColor;
@property(readonly, nonatomic) NSColor *canvasArtboardTitleColor;
- (id)layerListTextColorForBackgroundStyle:(long long)arg1 nodeIsHidden:(BOOL)arg2 editing:(BOOL)arg3 selected:(BOOL)arg4 active:(BOOL)arg5;
@property(readonly, nonatomic) NSColor *sidebarSeparatorColor;
@property(readonly, nonatomic) NSColor *componentsPanelGroupPreviewBackgroundColor;
@property(readonly, nonatomic) NSColor *layerListSelectedTabButtonColor;
@property(readonly, nonatomic) NSColor *layerListTabButtonColor;
- (id)layerListSymbolOverrideSelectionColorForWindow:(id)arg1 isActiveOutlineView:(BOOL)arg2;
@property(readonly, nonatomic) NSColor *layerListSymbolOverrideIconTintColor;
- (id)layerListSelectionColorForWindow:(id)arg1 isActiveOutlineView:(BOOL)arg2;
- (id)_colorNamed:(id)arg1 forWindow:(id)arg2 isActiveView:(BOOL)arg3;
@property(readonly, nonatomic) NSColor *layerListIconSharedTintColor;
@property(readonly, nonatomic) NSColor *layerListIconSelectedInactiveTintColor;
@property(readonly, nonatomic) NSColor *layerListIconSelectedActiveTintColor;
@property(readonly, nonatomic) NSColor *layerListIconTintColor;
@property(readonly, nonatomic) NSColor *layerListFilterTokenSelectedTitleColor;
@property(readonly, nonatomic) NSColor *layerListFilterTokenTitleColor;
@property(readonly, nonatomic) NSColor *layerListFilterTokenSelectedBackgroundColor;
@property(readonly, nonatomic) NSColor *layerListFilterTokenBackgroundColor;
@property(readonly, nonatomic) NSColor *layerListFilterBarBorderColor;
@property(readonly, nonatomic) NSColor *layerListFilterBarBackgroundColor;
@property(readonly, nonatomic) NSColor *layerListLightBackgroundColor;
@property(readonly, nonatomic) NSColor *layerListBackgroundColor;
@property(readonly, nonatomic) NSColor *layerListSelectedArtboardBorderColor;
@property(readonly, nonatomic) NSColor *layerListArtboardBorderColor;
@property(readonly, nonatomic) NSColor *inspectorSecondaryLabelTextColorHighlighted;
@property(readonly, nonatomic) NSColor *inspectorSecondaryLabelTextColor;
@property(readonly, nonatomic) NSColor *inspectorArtboardPresetTableViewBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorArtboardPresetHeaderColor;
@property(readonly, nonatomic) NSColor *inspectorStylePreviewButtonOverlayHighlightingColor;
@property(readonly, nonatomic) NSColor *inspectorSliderRightTrackColor;
@property(readonly, nonatomic) NSColor *inspectorSliderKnobBorderColor;
@property(readonly, nonatomic) NSColor *inspectorSliderKnobColor;
@property(readonly, nonatomic) NSColor *inspectorSectionSeparatorColor;
@property(readonly, nonatomic) NSColor *inspectorSectionHeaderTextColor;
@property(readonly, nonatomic) NSColor *inspectorSectionBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorResizePreviewInnerLayerBorderColor;
@property(readonly, nonatomic) NSColor *inspectorResizePreviewInnerLayerBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorResizePreviewEdgeIndicatorColor;
@property(readonly, nonatomic) NSColor *inspectorResizePreviewBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorPushButtonBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorLabelTextColor;
@property(readonly, nonatomic) NSColor *inspectorLabelBorderColor;
@property(readonly, nonatomic) NSColor *inspectorLabelBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorInlineLabelTextColor;
@property(readonly, nonatomic) NSColor *inspectorAccentedBackgroundIconColor;
@property(readonly, nonatomic) NSColor *inspectorIconColor;
@property(readonly, nonatomic) NSColor *inspectorHighlightedSliderKnobColor;
@property(readonly, nonatomic) NSColor *inspectorSegmentedControlSelectedIconColor;
@property(readonly, nonatomic) NSColor *inspectorSegmentedControlHighlightedIconColor;
@property(readonly, nonatomic) NSColor *inspectorSegmentedControlIconColor;
@property(readonly, nonatomic) NSColor *inspectorHighlightedIconColor;
@property(readonly, nonatomic) NSColor *inspectorHighlightedAccentColor;
@property(readonly, nonatomic) NSColor *inspectorButtonHighlightedBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorButtonDropShadowColor;
@property(readonly, nonatomic) NSColor *inspectorButtonBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorAlignmentViewBackgroundColor;
@property(readonly, nonatomic) NSColor *inspectorAlignmentHighlightedActiveStrutColor;
@property(readonly, nonatomic) NSColor *inspectorAlignmentActiveStrutColor;
@property(readonly, nonatomic) NSColor *inspectorAlignmentStrutColor;
@property(readonly, nonatomic) NSColor *inspectorAlignmentDisabledStrutColor;
@property(readonly, nonatomic) NSColor *inspectorHighlightedAccentedColorModePickerIconColor;
@property(readonly, nonatomic) NSColor *inspectorAccentedColorModePickerIconColor;
@property(readonly, nonatomic) NSColor *inspectorHighlightedAccentedIconColor;
@property(readonly, nonatomic) NSColor *inspectorAccentedIconColor;
@property(readonly, nonatomic) NSColor *inspectorAccentColor;

@end

