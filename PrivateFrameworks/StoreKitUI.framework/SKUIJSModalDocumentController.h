/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IKJSObject.h"

#import <StoreKitUI/SKUIJSModalDocumentController-Protocol.h>

@class NSArray, SKUIModalDocumentController;

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController>
{
    SKUIModalDocumentController *_modalDocumentController;
}

- (void).cxx_destruct;
- (void)pushDocument:(id)arg1:(id)arg2;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
@property(readonly, retain, nonatomic) NSArray *documents;
- (id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2;

@end

