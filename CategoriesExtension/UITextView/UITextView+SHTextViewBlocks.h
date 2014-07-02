//
//  UIControl+SHControlEventBlock.h
//  Example
//
//  Created by Seivan Heidari on 5/16/13.
//  Copyright (c) 2013 Seivan Heidari. All rights reserved.
//


#pragma mark - Block Defs
typedef void (^SHTextViewBlock)(UITextView * textView);
typedef BOOL (^SHTextViewPredicateBlock)(UITextView * textView);

typedef BOOL (^SHTextViewRangeReplacementBlock)(UITextView * textView,
NSRange shouldChangeTextInRange,
NSString * string);

@interface UITextView (SHTextViewBlocks)


#pragma mark - Helpers

#pragma mark - Properties

#pragma mark - Setters

-(void)completionShouldBeginEditingBlock:(SHTextViewPredicateBlock)theBlock;

-(void)completionShouldEndEditingBlock:(SHTextViewPredicateBlock)theBlock;

-(void)completionDidBeginEditingBlock:(SHTextViewBlock)theBlock;

-(void)completionDidEndEditingBlock:(SHTextViewBlock)theBlock;

-(void)completionShouldChangeCharactersInRangeWithReplacementTextBlock:(SHTextViewRangeReplacementBlock)theBlock;

-(void)completionDidChangeBlock:(SHTextViewBlock)theBlock;

-(void)completionDidChangeSelection:(SHTextViewBlock)theBlock;



#pragma mark - Getters

-(SHTextViewPredicateBlock)completionBlockShouldBeginEditing;

-(SHTextViewPredicateBlock)completionBlockShouldEndEditing;


-(SHTextViewBlock)completionBlockDidBeginEditing;

-(SHTextViewBlock)completionBlockDidEndEditing;

-(SHTextViewRangeReplacementBlock)completionBlockShouldChangeCharactersInRangeWithReplacementText;

-(SHTextViewBlock)completionBlockDidChange;

-(SHTextViewBlock)completionBlockDidChangeSelection;

@end
