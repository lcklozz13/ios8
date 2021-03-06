/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSXMLParser.h"

#import "CoreDAVResponseBodyParser-Protocol.h"

@class CoreDAVErrorItem, CoreDAVItem, CoreDAVXMLElementGenerator, NSError, NSSet, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>
{
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
    NSSet *_parseHints;
    NSURL *_baseURL;
}

+ (_Bool)canHandleContentType:(id)arg1;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSSet *parseHints; // @synthesize parseHints=_parseHints;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *rootErrorGenerator; // @synthesize rootErrorGenerator=_rootErrorGenerator;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *rootElementGenerator; // @synthesize rootElementGenerator=_rootElementGenerator;
@property(readonly, nonatomic) CoreDAVErrorItem *rootError;
@property(readonly, nonatomic) CoreDAVItem *rootElement;
- (void)dealloc;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly) NSError *parserError; // @dynamic parserError;

@end

