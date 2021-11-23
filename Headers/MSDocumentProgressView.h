//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class MSDocumentsCollectionItem, NSButton, NSColor, NSImage, NSImageView, NSProgress, NSProgressIndicator, NSTrackingArea;

@interface MSDocumentProgressView : NSControl
{
    NSColor *_backgroundColor;
    NSImage *_progressBackgroundImage;
    NSImage *_indeterminateProgressBackgroundImage;
    MSDocumentsCollectionItem *_collectionItem;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_progressIndicatorBackground;
    NSButton *_cancelButton;
    NSTrackingArea *_trackingArea;
    NSProgress *_progress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSImageView *progressIndicatorBackground; // @synthesize progressIndicatorBackground=_progressIndicatorBackground;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak MSDocumentsCollectionItem *collectionItem; // @synthesize collectionItem=_collectionItem;
@property(retain, nonatomic) NSImage *indeterminateProgressBackgroundImage; // @synthesize indeterminateProgressBackgroundImage=_indeterminateProgressBackgroundImage;
@property(retain, nonatomic) NSImage *progressBackgroundImage; // @synthesize progressBackgroundImage=_progressBackgroundImage;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (struct CGSize)intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateIndeterminateStatus;
- (void)tearDownIndeterminateObserving;
- (void)setupIndeterminateObserving;
- (void)setHidden:(BOOL)arg1;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;

@end

