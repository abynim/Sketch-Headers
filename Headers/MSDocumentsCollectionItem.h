//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDocumentsCollectionItemPreviewImageLoading-Protocol.h"

@class NSArray, NSAttributedString, NSColor, NSError, NSImage, NSProgress, NSString, NSURL;

@interface MSDocumentsCollectionItem : NSObject <MSDocumentsCollectionItemPreviewImageLoading>
{
    BOOL _showLibraryIcon;
    BOOL _showSharedDocumentIcon;
    BOOL _supportsRenaming;
    NSString *_title;
    NSAttributedString *_status;
    NSString *_statusColor;
    NSString *_toolTip;
    NSArray *_presences;
    NSProgress *_downloadProgress;
    NSError *_downloadError;
}

+ (id)keyPathsForValuesAffectingStatusColor;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)userTemplatesDirectoryURL;
+ (id)bundledTemplatesDirectoryURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL supportsRenaming; // @synthesize supportsRenaming=_supportsRenaming;
@property(readonly, nonatomic) BOOL showSharedDocumentIcon; // @synthesize showSharedDocumentIcon=_showSharedDocumentIcon;
@property(readonly, nonatomic) BOOL showLibraryIcon; // @synthesize showLibraryIcon=_showLibraryIcon;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSArray *presences; // @synthesize presences=_presences;
@property(readonly, nonatomic) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(readonly, nonatomic) NSString *statusColor; // @synthesize statusColor=_statusColor;
@property(retain, nonatomic) NSAttributedString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateCloudStatus;
- (void)cancelDocumentDownload;
- (BOOL)isEqual:(id)arg1;
- (id)getStatusColor;
@property(readonly, nonatomic) NSString *statusTooltip;
@property(readonly, nonatomic) BOOL supportsDeletion;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) NSColor *tintColor;
@property(readonly, nonatomic) BOOL providesPreviewImage;
@property(readonly, nonatomic) NSImage *placeholderImage;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;

@end

