//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MSDocument;

@interface MSPresenceFollowView : NSView
{
    // Error parsing type: , name: document
    // Error parsing type: , name: color
    // Error parsing type: , name: showsOutline
    // Error parsing type: , name: badge
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)didChangeFollowable:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)refresh;
@property(nonatomic) __weak MSDocument *document; // @synthesize document;

@end

