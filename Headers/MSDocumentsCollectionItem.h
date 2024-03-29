//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSColor, NSError, NSImage, NSProgress, NSString;

@interface MSDocumentsCollectionItem : NSObject
{
    BOOL _showLibraryIcon;
    BOOL _supportsRenaming;
    BOOL _supportsMoving;
    BOOL _supportsDeletion;
    BOOL _supportsPermanentDeletion;
    BOOL _userCanChange;
    BOOL _isProcessing;
    BOOL _hasProcessingError;
    BOOL _isUploading;
    NSString *_imageIconName;
    NSString *_title;
    NSAttributedString *_downloadStatus;
    NSString *_statusColor;
    NSString *_toolTip;
    NSArray *_presences;
    NSProgress *_downloadProgress;
    NSError *_downloadError;
    NSImage *_overlayIcon;
    NSString *_overlayIconTooltip;
    NSObject *_representedObject;
}

+ (id)keyPathsForValuesAffectingStatusColor;
+ (id)keyPathsForValuesAffectingDownloadStatus;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)relativeTimeLabelFromDate:(id)arg1;
+ (id)userTemplatesDirectoryURL;
+ (id)bundledTemplatesDirectoryURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isUploading; // @synthesize isUploading=_isUploading;
@property(readonly, nonatomic) BOOL hasProcessingError; // @synthesize hasProcessingError=_hasProcessingError;
@property(readonly, nonatomic) BOOL isProcessing; // @synthesize isProcessing=_isProcessing;
@property(readonly, nonatomic) NSObject *representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) BOOL userCanChange; // @synthesize userCanChange=_userCanChange;
@property(readonly, nonatomic) BOOL supportsPermanentDeletion; // @synthesize supportsPermanentDeletion=_supportsPermanentDeletion;
@property(readonly, nonatomic) BOOL supportsDeletion; // @synthesize supportsDeletion=_supportsDeletion;
@property(readonly, nonatomic) BOOL supportsMoving; // @synthesize supportsMoving=_supportsMoving;
@property(readonly, nonatomic) BOOL supportsRenaming; // @synthesize supportsRenaming=_supportsRenaming;
@property(readonly, nonatomic) NSString *overlayIconTooltip; // @synthesize overlayIconTooltip=_overlayIconTooltip;
@property(readonly, nonatomic) NSImage *overlayIcon; // @synthesize overlayIcon=_overlayIcon;
@property(readonly, nonatomic) BOOL showLibraryIcon; // @synthesize showLibraryIcon=_showLibraryIcon;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSArray *presences; // @synthesize presences=_presences;
@property(readonly, nonatomic) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(readonly, nonatomic) NSString *statusColor; // @synthesize statusColor=_statusColor;
@property(retain, nonatomic) NSAttributedString *downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *imageIconName; // @synthesize imageIconName=_imageIconName;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)keyPathsForProgressObserving;
- (void)resetTitle;
- (void)updateCloudStatus;
- (void)cancelDocumentDownload;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) double tagBackgroundOpacity;
@property(readonly, nonatomic) NSColor *tagColor;
@property(readonly, nonatomic) NSString *tagString;
- (id)getStatusColor;
@property(readonly, nonatomic) NSAttributedString *secondaryStatus;
@property(readonly, nonatomic) NSAttributedString *status;
@property(readonly, nonatomic) NSString *statusTooltip;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
- (BOOL)isPlaceholder;
@property(readonly, nonatomic) NSColor *tintColor;
- (BOOL)providesPreviewImage;
- (BOOL)matches:(id)arg1;

@end

