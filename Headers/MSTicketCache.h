//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSTicketCache : NSObject
{
    NSMutableDictionary *_tickets;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tickets; // @synthesize tickets=_tickets;
- (void)clearCache;
- (void)setTicket:(id)arg1 forKey:(id)arg2;
- (id)ticketFor:(id)arg1;
- (id)init;

@end

