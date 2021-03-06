/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class IKDOMDocument, IKDOMNode, IKDOMNodeList, NSString;

@protocol IKJSDOMNode <JSExport>
@property(retain, nonatomic) NSString *textContent;
@property(readonly, nonatomic) __weak IKDOMDocument *ownerDocument;
@property(readonly, nonatomic) __weak IKDOMNode *nextSibling;
@property(readonly, nonatomic) __weak IKDOMNode *previousSibling;
@property(readonly, retain, nonatomic) IKDOMNode *lastChild;
@property(readonly, retain, nonatomic) IKDOMNode *firstChild;
@property(readonly, retain, nonatomic) IKDOMNodeList *childNodes;
@property(readonly, nonatomic) __weak IKDOMNode *parentNode;
@property(readonly, nonatomic) long long nodeType;
@property(retain, nonatomic) NSString *nodeValue;
@property(readonly, retain, nonatomic) NSString *nodeName;
- (id)getFeature:(id)arg1:(id)arg2;
- (_Bool)isEqualNode:(id)arg1;
- (_Bool)isSameNode:(id)arg1;
- (id)cloneNode:(_Bool)arg1;
- (_Bool)hasChildNodes;
- (id)appendChild:(id)arg1;
- (id)removeChild:(id)arg1;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)insertBefore:(id)arg1:(id)arg2;
@end

