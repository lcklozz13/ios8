/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPComponentReader.h>

@class TSPDescriptionGenerator;

// Not exported
@interface TSPDescriptionComponentReader : TSPComponentReader
{
    TSPDescriptionGenerator *_descriptionGenerator;
}

- (void).cxx_destruct;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo *)arg2 message:(auto_ptr_4370f086 *)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(auto_ptr_c01b630f)arg5 unknownMessages:(id)arg6 error:(id *)arg7;
- (_Bool)shouldProceedParsingOnFailure;
- (void)read;
- (id)initWithComponent:(id)arg1 readChannel:(id)arg2 descriptionGenerator:(id)arg3;
- (id)init;

@end
