/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUILabelViewElement;

@interface SKUIMenuViewElement : SKUIViewElement
{
    SKUILabelViewElement *_menuLabel;
}

@property(readonly, nonatomic) SKUILabelViewElement *menuLabel; // @synthesize menuLabel=_menuLabel;
- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(id)arg1;
@property(readonly, nonatomic) long long selectedItemIndex;
@property(readonly, nonatomic) NSArray *menuItemTitles;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;

@end
