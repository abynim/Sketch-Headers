//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class MSContentDrawView, NSArray, NSString, NSWindow;

@interface MSShareButtonHandler : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSWindow *_window;
    NSArray *_sliceLayers;
    MSContentDrawView *_canvas;
}

@property(nonatomic) __weak MSContentDrawView *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) NSArray *sliceLayers; // @synthesize sliceLayers=_sliceLayers;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)itemsFromSlices:(id)arg1;
- (void)showShareMenuForLayers:(id)arg1 sender:(id)arg2 canvas:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

