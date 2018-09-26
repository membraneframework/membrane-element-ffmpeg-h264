#pragma once

#include <erl_nif.h>
#include <libavcodec/avcodec.h>
#include <libavutil/opt.h>
#include <libavutil/imgutils.h>

typedef struct _h264_parser_state {
  AVCodec * codec;
  AVCodecContext * codec_ctx;
  AVCodecParserContext * parser_ctx;
} UnifexNifState;

typedef UnifexNifState State;

#include "_generated/parser.h"
