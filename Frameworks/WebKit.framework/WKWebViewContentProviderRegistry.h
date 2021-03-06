/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WKWebViewContentProviderRegistry : NSObject
{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>> _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Class)providerForMIMEType:(const struct String *)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String *)arg2;
- (void)removePage:(struct WebPageProxy *)arg1;
- (void)addPage:(struct WebPageProxy *)arg1;
- (id)init;

@end

