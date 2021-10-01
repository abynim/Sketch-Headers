//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSExistingDocumentCollectionItem.h"

#import "MSPresenceObserverDelegate-Protocol.h"

@class MSPresenceObserver, NSImage, NSString, SCKCloudDocument, SCKShare;

@interface MSCloudShareCollectionItem : MSExistingDocumentCollectionItem <MSPresenceObserverDelegate>
{
    BOOL _loading;
    BOOL _displaysTimestamp;
    SCKShare *_cloudShare;
    NSImage *_previewImage;
    MSPresenceObserver *_presenceObserver;
    NSString *_shareName;
}

+ (id)relativeTimeLabelFromDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
@property(nonatomic) BOOL displaysTimestamp; // @synthesize displaysTimestamp=_displaysTimestamp;
@property(readonly, nonatomic) MSPresenceObserver *presenceObserver; // @synthesize presenceObserver=_presenceObserver;
@property(retain, nonatomic) NSImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) SCKShare *cloudShare; // @synthesize cloudShare=_cloudShare;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
- (void)presenceObserverWithFailedWithError:(id)arg1;
- (void)presenceObserverWithUpdatedPresences:(id)arg1;
- (id)status;
- (void)cancelDocumentDownload;
- (void)fetchPreviewImageWithMaximumPixelSize:(double)arg1 previewImageCache:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)toolTip;
- (double)tagBackgroundOpacity;
- (id)tagColor;
- (id)tagString;
- (BOOL)isEnabled;
- (BOOL)isPlaceholder;
- (BOOL)showLibraryIcon;
- (id)privacyIconTooltip;
- (id)privacyIcon;
- (BOOL)providesPreviewImage;
- (BOOL)isEqual:(id)arg1;
- (id)URL;
- (void)resetTitle;
- (void)setTitle:(id)arg1;
- (id)title;
@property(readonly, nonatomic) SCKCloudDocument *latestDocument;
- (BOOL)isUploading;
- (BOOL)hasProcessingError;
- (BOOL)isProcessing;
- (BOOL)supportsMoving;
- (BOOL)supportsRenaming;
- (BOOL)supportsDeletion;
- (void)dealloc;
- (id)initWithCloudShare:(id)arg1 previewImage:(id)arg2;
- (id)initWithCloudShare:(id)arg1;

@end

