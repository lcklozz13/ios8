/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMMessageChatItem-Protocol.h>

@class IMHandle, IMMessage, NSDate;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
}

@property(readonly, retain, nonatomic) IMHandle *sender;
@property(readonly, retain, nonatomic) NSDate *time;
@property(readonly, nonatomic) _Bool failed;
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, retain, nonatomic) IMMessage *message;

@end

