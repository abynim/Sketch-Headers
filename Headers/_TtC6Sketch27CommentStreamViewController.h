//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSProgressIndicator, NSTableView, NSTextField, NSView;

@interface _TtC6Sketch27CommentStreamViewController : NSViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: placeholderView
    // Error parsing type: , name: placeholderLabel
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: subject
    // Error parsing type: , name: comments
    // Error parsing type: , name: flatComments
    // Error parsing type: , name: isLoading
    // Error parsing type: , name: subscriptionController
    // Error parsing type: , name: subscription
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)scrollDown:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)dealloc;
@property(nonatomic, retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic, retain) NSTextField *placeholderLabel; // @synthesize placeholderLabel;
@property(nonatomic, retain) NSView *placeholderView; // @synthesize placeholderView;
@property(nonatomic, retain) NSTableView *tableView; // @synthesize tableView;

@end

